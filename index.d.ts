declare class HX711 {
  constructor(clockPin: number, dataPin: number)

  read(): number
  setScale(scale: number): void
  setOffset(offset: number): void
  tare(times?: number): void
  getUnits(times?: number): number
  setGain(gain: 128 | 64 | 32): void
  getOffset(): number
  getScale(): number
}

export = HX711
