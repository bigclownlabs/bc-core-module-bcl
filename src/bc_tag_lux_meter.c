#include <bc_tag_lux_meter.h>

void bc_tag_lux_meter_init(bc_tag_lux_meter_t *self, bc_i2c_channel_t i2c_channel, bc_tag_lux_meter_i2c_address_t i2c_address)
{
    bc_opt3001_init(self, i2c_channel, (uint8_t) i2c_address);
}

void bc_tag_lux_meter_set_event_handler(bc_tag_lux_meter_t *self, void (*event_handler)(bc_tag_lux_meter_t *, bc_tag_lux_meter_event_t))
{
    bc_opt3001_set_event_handler(self, (void (*)(bc_opt3001_t *, bc_opt3001_event_t)) event_handler);
}

void bc_tag_lux_meter_set_update_interval(bc_tag_lux_meter_t *self, bc_tick_t interval)
{
    bc_opt3001_set_update_interval(self, interval);
}

bool bc_tag_lux_meter_get_luminosity_raw(bc_tag_lux_meter_t *self, uint16_t *raw)
{
    return bc_opt3001_get_luminosity_raw(self, raw);
}

bool bc_tag_lux_meter_get_luminosity_lux(bc_tag_lux_meter_t *self, float *lux)
{
    return bc_opt3001_get_luminosity_lux(self, lux);
}
