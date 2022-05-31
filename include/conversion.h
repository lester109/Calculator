#pragma once

#include <stdio.h>
#include <string.h>

#define CONV_MAX 18
#define CONV_RUNNING 1


char conv_units[][CONV_MAX][CONV_MAX] = {
    {
    "mm", "cm", "m", "km", "in", "ft", "yd", "mi"
    },
    {
    "ms", "s", "min", "hr", "day", "wk", "mon", "yr"
    },
    { "K", "F", "C", "||", "||", "||", "||", "||"
    },
    {
    "mg", "g", "kg", "oz", "lb", "lt", "||", "||"
    }
};

char measure_names[4][CONV_MAX] = {
    "Length",
    "Time",
    "Temperature",
    "Mass/Weight"
};

char all_units[][CONV_MAX] = {
    "K", "F", "C",
    "mg", "g", "kg", "oz", "lb", "lt",
    "mm", "cm", "m", "km", "in", "ft", "yd", "mi", 
    "ms", "s", "min", "hr", "day", "wk", "mon", "yr"
};

int is_unit(char *unit)
{
     for (int i=0; i < 25; i++)
        {
            if (!strcmp(unit, all_units[i]))
                {
                    return 1;
                }
            else
                {continue;};
        };
    return 0;
};

typedef struct Units
{
    char mname[CONV_MAX];
    char unit_[CONV_MAX];
    int measure_id;
    int unit_id;
    double value;
    int ivalue;
}
Unit;


void length_conversion(Unit unit)
{
    if (!strcmp(unit.unit_, conv_units[unit.measure_id][0]))
        {
            double cm_ = unit.value / (double)(10);
            double m_ = unit.value / (double)(1000);
            double km_ = unit.value / (double)(1000000);
            double in_ = unit.value / (double)(25.4);
            double ft_ = unit.value / (double)(305);
            double yd_ = unit.value / (double)(914);
            double mi_ = unit.value / (double)(1609000);

            printf("\nMeasuring Type: %s (mm)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: % dm\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.5lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.7lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][1]))
        {
            double mm_ = unit.value * (double)(10);
            double m_ = unit.value / (double)(100);
            double km_ = unit.value / (double)(100000);
            double in_ = unit.value / (double)(2.54);
            double ft_ = unit.value / (double)(30.48);
            double yd_ = unit.value / (double)(91.44);
            double mi_ = unit.value / (double)(160934);

            printf("\nMeasuring Type: %s (cm)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Meter: % dm\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.3lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.6lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][2]))
        {
            double mm_ = unit.value * (double)(1000);
            double cm_ = unit.value * (double)(100);
            double km_ = unit.value / (double)(1000);
            double in_ = unit.value * (double)(39.37);
            double ft_ = unit.value * (double)(3.281);
            double yd_ = unit.value * (double)(1.094);
            double mi_ = unit.value / (double)(1609);

            printf("\nMeasuring Type: %s (m)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Kilometer: %d km\t(%.3lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.3lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][3]))
        {
            double mm_ = unit.value * (double)(1000000);
            double cm_ = unit.value * (double)(100000);
            double m_ = unit.value * (double)(1000);
            double in_ = unit.value * (double)(39370.1);
            double ft_ = unit.value * (double)(3281);
            double yd_ = unit.value * (double)(1094);
            double mi_ = unit.value / (double)(1.609);

            printf("\nMeasuring Type: %s (km)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: %d m\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.3lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][4]))
        {
            double mm_ = unit.value * (double)(25.4);
            double cm_ = unit.value * (double)(2.54);
            double m_ = unit.value / (double)(39.37);
            double km_ = unit.value / (double)(39370);
            double ft_ = unit.value / (double)(12);
            double yd_ = unit.value / (double)(36);
            double mi_ = unit.value / (double)(63360);

            printf("\nMeasuring Type: %s (in)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: %d m\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.5lf km)\n", (int)km_, km_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.5lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][5]))
        {
            double mm_ = unit.value * (double)(305);
            double cm_ = unit.value * (double)(30.48);
            double m_ = unit.value / (double)(3.281);
            double km_ = unit.value / (double)(3281);
            double in_ = unit.value * (double)(12);
            double yd_ = unit.value / (double)(3);
            double mi_ = unit.value / (double)(5280);

            printf("\nMeasuring Type: %s (ft)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: %d m\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.3lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
            printf("\tTo Mile: %d mi\t(%.3lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][6]))
        {
            double mm_ = unit.value * (double)(914);
            double cm_ = unit.value * (double)(91.44);
            double m_ = unit.value / (double)(1.094);
            double km_ = unit.value / (double)(1094);
            double in_ = unit.value * (double)(36);
            double ft_ = unit.value * (double)(3);
            double mi_ = unit.value / (double)(1760);

            printf("\nMeasuring Type: %s (yd)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.3lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: %d m\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.3lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Mile: %d mi\t(%.3lf mi)\n", (int)mi_, mi_);
        }
        else if (!strcmp(unit.unit_, conv_units[unit.measure_id][7]))
        {
            double mm_ = unit.value * (double)(1609340);
            double cm_ = unit.value * (double)(160934);
            double m_ = unit.value * (double)(1609);
            double km_ = unit.value * (double)(1.609);
            double in_ = unit.value * (double)(63360);
            double ft_ = unit.value * (double)(5280);
            double yd_ = unit.value * (double)(1760);

            printf("\nMeasuring Type: %s (mi)\tValue: %.3lf\n\n", 
                unit.mname, unit.value);
            printf("\tTo Millimeter: %d mm\t(%.5lf mm)\n", (int)mm_, mm_);
            printf("\tTo Centimeter: %d cm\t(%.3lf cm)\n", (int)cm_, cm_);
            printf("\tTo Meter: %d m\t(%.3lf m)\n", (int)m_, m_);
            printf("\tTo Kilometer: %d km\t(%.3lf km)\n", (int)km_, km_);
            printf("\tTo Inches: %d in\t(%.3lf in)\n", (int)in_, in_);
            printf("\tTo Foot: %d ft\t(%.3lf ft)\n", (int)ft_, ft_);
            printf("\tTo Yard: %d yd\t(%.3lf yd)\n", (int)yd_, yd_);
        }
};


void time_conversion(Unit unit)
{
    if (!strcmp(unit.unit_, conv_units[unit.measure_id][0]))
    {
        double s_ = unit.value / (double)(1000);
        double min_ = unit.value / (double)(60000);
        double hr_ = min_ / (double)(60);
        double day_ = hr_ / (double)(24);
        double week_ = day_ / (double)(7);
        double month_ = week_ / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Second: %d s\t(%.5lf s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.6lf min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][1]))
    {
        double ms_ = unit.value * (double)(1000);
        double min_ = unit.value / (double)(60);
        double hr_ = min_ / (double)(60);
        double day_ = hr_ / (double)(24);
        double week_ = day_ / (double)(7);
        double month_ = week_ / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Minute: %d min\t(%.6lf min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][2]))
    {
        double ms_ = unit.value * (double)(60000);
        double s_ = unit.value * (double)(60);
        double hr_ = unit.value / (double)(60);
        double day_ = hr_ / (double)(24);
        double week_ = day_ / (double)(7);
        double month_ = week_ / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][3]))
    {
        double s_ = unit.value * (double)(3600);
        double ms_ = s_ * (double)(1000);
        double min_ = s_ / (double)(60);
        double day_ = min_ / (double)(1440);
        double week_ = day_ / (double)(7);
        double month_ = week_ / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.3E min)\n", (int)min_, min_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][4]))
    {
        double min_ = unit.value * (double)(1440);
        double s_ = min_ * (double)(60);
        double ms_ = s_ * (double)(1000);
        double hr_ = min_ / (double)(60);
        double week_ = unit.value / (double)(7);
        double month_ = week_ / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.3E min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][5]))
    {
        double day_ = unit.value * (double)(7);
        double hr_ = day_ * (double)(24);
        double min_ = hr_ * (double)(60);
        double s_ = min_ * (double)(60);
        double ms_ = s_ * (double)(1000);
        double month_ = unit.value / (double)(4.345);
        double year_ = month_ / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.3E min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)month_, month_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][6]))
    {
        double week_ = unit.value * (double)(4.345);
        double day_ = unit.value * (double)(7);
        double hr_ = day_ * (double)(24);
        double min_ = hr_ * (double)(60);
        double s_ = min_ * (double)(60);
        double ms_ = s_ * (double)(1000);
        double year_ = unit.value / (double)(12);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.3E min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Year: %d yr\t(%.3E yr)\n", (int)year_, year_);
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][7]))
    {
        double mon_ = unit.value * (double)(12);
        double week_ = mon_ * (double)(4.345);
        double day_ = unit.value * (double)(365);
        double hr_ = day_ * (double)(8760);
        double min_ = hr_ * (double)(60);
        double s_ = min_ * (double)(60);
        double ms_ = s_ * (double)(1000);

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milliseond: %d ms\t(%.3E ms)\n", (int)ms_, ms_);
        printf("\tTo Second: %d s\t(%.3E s)\n", (int)s_, s_);
        printf("\tTo Minute: %d min\t(%.3E min)\n", (int)min_, min_);
        printf("\tTo Hour: %d hr\t(%.3E hr)\n", (int)hr_, hr_);
        printf("\tTo Day: %d day\t(%.3E day)\n", (int)day_, day_);
        printf("\tTo Week: %d wk\t(%.3E wk)\n", (int)week_, week_);
        printf("\tTo Month: %d mon\t(%.3E mon)\n", (int)mon_, mon_);
    }
  
};


void temperature_conversion(Unit unit)
{
    if (!strcmp(unit.unit_, conv_units[unit.measure_id][0]))
    {
        double f_ = (unit.value - (double)273.15) * (double)1.8 + (double)32;
        double c_ = unit.value - (double)273.15;

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Fahrenheit: %d F\t(%.4lf F)\n", (int)f_, f_);
        printf("\tTo Celcius: %d C\t(%.4lf C)\n", (int)c_, c_);
      
    }
    else if (!strcmp(unit.unit_, conv_units[unit.measure_id][1]))
    {
        double k_ = (((unit.value - (double)32) * 5)/9) + 273.15;
        double c_ = ((unit.value - (double)32) * 5)/9;

        printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Kelvin: %d K\t(%.4lf K)\n", (int)k_, k_);
        printf("\tTo Celcius: %d C\t(%.4lf C)\n", (int)c_, c_);
      
    }
  if (!strcmp(unit.unit_, conv_units[unit.measure_id][2]))
  {
    double k_ = (unit.value + (double)273.15);
    double f_ = (unit.value *(double)9/5) + (double)32;
      
printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
    printf("\tTo Kelvin: %d K\t(%.4lf K)\n", (int)k_, k_);
    
    printf("\tTo Fahrenheit: %d F\t(%.4lf F)\n", (int)f_, f_);
  }
};


void mass_conversion(Unit unit)
{
    if (!strcmp(unit.unit_, conv_units[unit.measure_id][0]))
    {
        double g_ = unit.value / (double)(1000);
        double kg_ = g_ / (double)(1000);
        double oz_ = unit.value / (double)(28350);
        double lb_ = unit.value / (double) (453592);
        double lt_= g_ / (double) (907185);  
        
printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Gram: %d g\t(%.4lf g)\n", (int)g_, g_);
        printf("\tTo Kilogram: %d kg\t(%.4E kg)\n", (int)kg_, kg_);
        printf("\tTo Ounce: %d oz\t(%.4E oz)\n", (int)oz_, oz_);
        printf("\tTo Pound: %d lb\t(%.4E lb)\n", (int)lb_, lb_);
        printf("\tTo Ton %d lt\t(%.4E lt)\n", (int)lt_, lt_ );
      }
  else if (!strcmp(unit.unit_, conv_units[unit.measure_id][1]))
  {
      double mg_ = unit.value * (double) (1000);
      double kg_ = unit.value / (double) (1000);
      double oz_ = unit.value / (double) (28.35);
      double lb_ = unit.value / (double) (454);
      double lt_ = unit.value / (double) (907185
);

  printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
         printf("\tTo Milligram: %d mg\t(%.4lf mg)\n", (int)mg_, mg_);  
        printf("\tTo Kilogram: %d kg\t(%.4E kg)\n", (int)kg_, kg_);
        printf("\tTo Ounce: %d oz\t(%.4E oz)\n", (int)oz_, oz_);
        printf("\tTo Pound: %d lb\t(%.4E lb)\n", (int)lb_, lb_);
        printf("\tTo Ton %d lt\t(%.4E lt)\n", (int)lt_, lt_ );
      
  }
  else if (!strcmp(unit.unit_, conv_units[unit.measure_id][2]))
  {
      double mg_ = unit.value * (double) (1000000);
      double g_ = unit.value  * (double) (1000);
      double oz_ = unit.value * (double) (35.274);
      double lb_ = unit.value * (double) (2.205
);
      double lt_ = unit.value / (double) (907);
    
    
 printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milligram: %d mg\t(%.4E mg)\n", (int)mg_, mg_); 
        printf("\tTo Gram: %d g\t(%.4E g)\n", (int)g_, g_);
        printf("\tTo Ounce: %d oz\t(%.4E oz)\n", (int)oz_, oz_);
        printf("\tTo Pound: %d lb\t(%.4E lb)\n", (int)lb_, lb_);
        printf("\tTo Ton %d lt\t(%.4E lt)\n", (int)lt_, lt_ );
  }
  else if (!strcmp(unit.unit_, conv_units[unit.measure_id][3]))
  {
      double mg_ = unit.value * (double) (28350
);
      double g_ = unit.value  * (double) (28.35);
      double kg_ = unit.value / (double) (35.274);
      double lb_ = unit.value / (double) (16);
      double lt_ = unit.value / (double) (32000); 
    
  printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milligram: %d mg\t(%.4E mg)\n", (int)mg_, mg_); 
        printf("\tTo Gram: %d g\t(%.4E g)\n", (int)g_, g_);
        printf("\tTo Kilogram: %d kg\t(%.4E kg)\n", (int)kg_, kg_);           printf("\tTo Pound: %d lb\t(%.4E lb)\n", (int)lb_, lb_);
        printf("\tTo Ton %d lt\t(%.4E lt)\n", (int)lt_, lt_ );
  }
  else if (!strcmp(unit.unit_, conv_units[unit.measure_id][4]))
  {
      double mg_ = unit.value * (double) (453592);
      double g_ = unit.value  * (double) (454);
      double kg_ = unit.value / (double) (2.205);
      double oz_ = unit.value * (double) (16);
      double lt_ = unit.value / (double) (2000);
    
printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milligram: %d mg\t(%.4E mg)\n", (int)mg_, mg_); 
        printf("\tTo Gram: %d g\t(%.4E g)\n", (int)g_, g_);
        printf("\tTo Kilogram: %d kg\t(%.4E kg)\n", (int)kg_, kg_);           printf("\tTo Ounce: %d oz\t(%.4E oz)\n", (int)oz_, oz_);
        printf("\tTo Ton %d lt\t(%.4E lt)\n", (int)lt_, lt_ );
    
  }
  else if (!strcmp(unit.unit_, conv_units[unit.measure_id][5]))
  {
      double mg_ = unit.value * (double) (907200000);
      double g_ = unit.value  * (double) (907185);
      double kg_ = unit.value * (double) (907);
      double oz_ = unit.value * (double) (32000);
      double lb_ = unit.value * (double) (2000);
    
printf("\nMeasuring Type: %s (%s)\tValue: %.3lf\n\n", 
                unit.mname, unit.unit_, unit.value);
        printf("\tTo Milligram: %d mg\t(%.4E mg)\n", (int)mg_, mg_); 
        printf("\tTo Gram: %d g\t(%.4E g)\n", (int)g_, g_);
        printf("\tTo Kilogram: %d kg\t(%.4E kg)\n", (int)kg_, kg_);           printf("\tTo Ounce: %d oz\t(%.4E oz)\n", (int)oz_, oz_);
        printf("\tTo Pound: %d lb\t(%.4E lb)\n", (int)lb_, lb_);
   }
}



void converts(Unit unit)
{
    if (!strcmp(unit.mname, measure_names[0]))
    {
        length_conversion(unit);
    }
    else if (!strcmp(unit.mname, measure_names[1]))
    {
        time_conversion(unit);
    }
    else if (!strcmp(unit.mname, measure_names[2]))
    {
        temperature_conversion(unit);
    }
    else if (!strcmp(unit.mname, measure_names[3]))
    {
        mass_conversion(unit);
    }
};

Unit get_unit_info(char *unit, double value)
{
   Unit unit_;

    for (int i=0; i<4; i++)
        {
            for (int j=0; j<8; j++)
                {
                    if (!strcmp(unit, conv_units[i][j]))
                        {
                            unit_.value = value;
                            unit_.ivalue = (int)(value);
                            strcpy(unit_.mname, measure_names[i]);
                            strcpy(unit_.unit_, unit);
                            unit_.measure_id = i;
                            unit_.unit_id = j;
                            break;
                        };
                };
        };

    return unit_;
};


void conversion()
{
    char unit[CONV_MAX];
    char exit_stat;
    double number;
    int inumber;

    printf("\n[MODE]: Conversion Mode On\n\n");
    
    while (CONV_RUNNING)
        {
            printf("\n>> ");
            int argc = scanf(" %lf %s", &number, unit);

            if (argc <= 0)
            {
                scanf(" %c", &exit_stat);
                if (exit_stat == 'e'){puts("\nExiting...\n");break;};
            };

            if (!is_unit(unit))
                {
                    printf("Invalid unit (%s).\n", unit);
                    continue;
                }
            
            Unit unit_ = get_unit_info(unit, number);
            converts(unit_);
        }
}
