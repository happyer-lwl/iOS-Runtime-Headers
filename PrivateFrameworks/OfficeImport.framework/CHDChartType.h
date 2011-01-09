/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDCollection, CHDSeriesCollection, CHDDataLabel, CHDChart;



@interface CHDChartType : NSObject 
{
    CHDChart *mChart;
    EDCollection *mAxisIds;
    CHDSeriesCollection *mSeries;
    CHDDataLabel *mDefaultDataLabel;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mVaryColors;

}

+ (id)chartTypeWithChart:(id)arg1;
+ (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)is3DType;
     /* Encoded args for previous method: B8@0:4 */


- (void)dealloc;
- (id)seriesCollection;
- (void)setDefaultDataLabel:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isPlotedOnSecondaryAxis;
     /* Encoded args for previous method: B8@0:4 */

- (id)axisForClass:(Class)arg1;
- (void)setSeriesCollection:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isVaryColors;
     /* Encoded args for previous method: B8@0:4 */

- (id)initWithChart:(id)arg1;
- (NSInteger)defaultLabelPosition;
- (id)axes;
- (id)chart;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHorizontal;
     /* Encoded args for previous method: B8@0:4 */

- (void)setVaryColors:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)axisIds;
- (id)defaultTitleWithResources:(id)arg1;
- (id)contentFormat;
- (id)defaultDataLabel;

@end