/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/AccessibilityBundles/WebCore.axbundle/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXLiveRegionNode : NSObject {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;
	id _object;

}

@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic,__weak) id object;                       //@synthesize object=_object - In the implementation block
+(id)createNodeFromObject:(id)arg1 ;
-(void)setTraits:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)object;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)label;
-(void)setObject:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)traits;
@end

