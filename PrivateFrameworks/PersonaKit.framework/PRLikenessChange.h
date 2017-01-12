/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

@interface PRLikenessChange : NSObject {
    NSString * _changedLikenessID;
    NSNumber * _changedLikenessVersion;
    NSArray * _dirtyLikenessProperties;
    NSString * _identifier;
    unsigned int  _type;
}

@property (nonatomic, copy) NSString *changedLikenessID;
@property (nonatomic, copy) NSNumber *changedLikenessVersion;
@property (nonatomic, copy) NSArray *dirtyLikenessProperties;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned int type;

+ (id)changeForLikeness:(id)arg1 withType:(unsigned int)arg2;
+ (unsigned int)changeTypeFromDescription:(id)arg1;
+ (id)descriptionForChangeType:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)changedLikenessID;
- (id)changedLikenessVersion;
- (id)description;
- (id)dirtyLikenessProperties;
- (id)identifier;
- (void)setChangedLikenessID:(id)arg1;
- (void)setChangedLikenessVersion:(id)arg1;
- (void)setDirtyLikenessProperties:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end