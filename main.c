//Programmer: Derrick Snow Jr
// Program: Metals Lab
//Purpose: Determine weight of Person if different metal

#include <stdio.h>

FILE *fp;

int
main (void)
{

  float weight; 		/* user weight             */
  float value;			/* Aluminum equivalent     */
  float value2;			/* Copper equivalent       */
  float value3;			/* Gold equivanlent        */
  float value4;			/* Lead equivanlent        */
  float value5;			/* Magnesium equivanlent   */
  float value6;			/* Platinum equivanlent    */
  float value7;			/* Zinc equivanlent        */
  fp = fopen("csis.txt","w");      

  weight = 1.76;       /* User weight */

  value = 168.48 * weight;	/* Aluminum weight     */
  value2 = 559.87 * weight;	/* Copper weight       */
  value3 = 1206.83 * weight;/* Gold weight         */
  value4 = 707.96 * weight;	/* Lead weight         */
  value5 = 108.51 * weight;	/* Magnesium weight    */
  value6 = 1339.20 * weight;	/* Platinum weight     */
  value7 = 445.30 * weight;	/* Zinc weight         */

  printf ("Weight of a person in the various metals\n");
  printf ("===========================================\n");
  printf ("Aluminum: % .1f\n", value);
  printf ("Copper: % .1f\n", value2);
  printf ("Gold: % .1f\n", value3);
  printf ("Lead: % .1f\n", value4);
  printf ("Magnesium: % .1f\n", value5);
  printf ("Platinum: % .1f\n", value6);
  printf ("Zinc: % .1f\n\n", value7);
fclose(fp);

  return 0;
}
