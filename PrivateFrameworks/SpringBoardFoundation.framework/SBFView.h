/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFView : UIView {
    NSArray * _animatedLayerProperties;
    id /* block */  _didMoveToWindowHandler;
    struct CGSize { 
        float width; 
        float height; 
    }  _intrinsicContentSize;
}

@property (nonatomic, copy) NSArray *animatedLayerProperties;
@property (nonatomic, copy) id /* block */ didMoveToWindowHandler;
@property (nonatomic) struct CGSize { float x1; float x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)animatedLayerProperties;
- (void)didMoveToWindow;
- (id /* block */)didMoveToWindowHandler;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setAnimatedLayerProperties:(id)arg1;
- (void)setDidMoveToWindowHandler:(id /* block */)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { float x1; float x2; })arg1;

@end
