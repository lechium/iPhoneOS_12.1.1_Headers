/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString;

@interface _REConcreteFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;

}
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)initWithName:(id)arg1 featureType:(unsigned long long)arg2 ;
-(id)_rootFeatures;
-(BOOL)isEqual:(id)arg1 ;
-(id)name;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
