/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PGFeature : NSObject {

	id _typeSpecificIdentifier;
	unsigned long long _type;
	NSString* _name;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isNoneFeature; 
+(id)featureWithType:(unsigned long long)arg1 node:(id)arg2 ;
+(id)noneFeatureWithType:(unsigned long long)arg1 ;
+(id)featureWithType:(unsigned long long)arg1 name:(id)arg2 ;
+(id)stringForFeatureType:(unsigned long long)arg1 ;
+(id)nameForNode:(id)arg1 ;
-(id)encodedFeature;
-(id)initWithEncodedFeature:(id)arg1 graph:(id)arg2 ;
-(id)nodeInGraph:(id)arg1 ;
-(BOOL)isNoneFeature;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
@end
