/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSData;

@interface PHFaceCrop : PHObject {

	short _state;
	short _type;
	NSData* _resourceData;

}

@property (nonatomic,readonly) NSData * resourceData;              //@synthesize resourceData=_resourceData - In the implementation block
@property (nonatomic,readonly) short state;                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) short type;                         //@synthesize type=_type - In the implementation block
+(id)managedEntityName;
+(id)identifierCode;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1 ;
+(id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFaceCropsWithOptions:(id)arg1 ;
+(id)fetchType;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(NSData *)resourceData;
-(short)state;
-(short)type;
@end
