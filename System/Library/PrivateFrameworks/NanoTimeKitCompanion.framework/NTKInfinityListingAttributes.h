/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NTKInfinityListingAttributes : NSObject {

	NSMutableDictionary* _attributes;

}

@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)attributesWithDictionary:(id)arg1 ;
-(id)colorForKey:(id)arg1 ;
-(void)addAttribute:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsAttributes:(id)arg1 ignoreKeys:(id)arg2 ;
-(id)description;
-(id)debugDescription;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
@end
