/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSArchivePath : NSObject {
    NSString * _prefix;
    BOOL  _root;
    NSURL * _sourceUrl;
}

@property (nonatomic, retain) NSString *prefix;
@property (nonatomic) BOOL root;
@property (nonatomic, retain) NSURL *sourceUrl;

+ (id)archivePathWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3;

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 prefix:(id)arg2 root:(BOOL)arg3;
- (id)prefix;
- (BOOL)root;
- (void)setPrefix:(id)arg1;
- (void)setRoot:(BOOL)arg1;
- (void)setSourceUrl:(id)arg1;
- (id)sourceUrl;

@end
