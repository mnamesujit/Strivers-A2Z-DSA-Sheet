class TimeLimitedCache {
  constructor() {
    this.cache = new Map();
  }

  set(key, value, duration) {
    const currentTime = Date.now();
    const expireTime = currentTime + duration;
    if (this.cache.has(key) && this.cache.get(key).expireTime > currentTime) {
      this.cache.set(key, { value, expireTime });
      return true;
    } else {
      this.cache.set(key, { value, expireTime });
      return false;
    }
  }

  get(key) {
    const currentTime = Date.now();
    if (this.cache.has(key) && this.cache.get(key).expireTime > currentTime) {
      return this.cache.get(key).value;
    } else {
      return -1;
    }
  }

  count() {
    const currentTime = Date.now();
    let count = 0;
    for (const [key, value] of this.cache.entries()) {
      if (value.expireTime > currentTime) {
        count++;
      } else {
        this.cache.delete(key);
      }
    }
    return count;
  }
}