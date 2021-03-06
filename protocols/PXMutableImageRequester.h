/* Generated by RuntimeBrowser.
 */

@protocol PXMutableImageRequester <NSObject>

@required

- (<PXDisplayAsset> *)asset;
- (struct CGSize { float x1; float x2; })contentSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })desiredContentsRect;
- (void)handlePreloadedImage:(UIImage *)arg1;
- (void)handlePreloadedImageRequester:(PXImageRequester *)arg1;
- (PXUIMediaProvider *)mediaProvider;
- (float)scale;
- (void)setAsset:(id <PXDisplayAsset>)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDesiredContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMediaProvider:(PXUIMediaProvider *)arg1;
- (void)setScale:(float)arg1;
- (void)setViewportSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })viewportSize;

@end
