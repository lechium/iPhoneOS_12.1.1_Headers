/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject {

	NSSet* _peopleUUIDs;
	unsigned long long _maximumNumberOfPeople;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPeople;              //@synthesize maximumNumberOfPeople=_maximumNumberOfPeople - In the implementation block
@property (nonatomic,readonly) NSSet * peopleUUIDs;                                 //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
+(id)_personSortDescriptors;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(id)_collectValidPeopleUUIDs;
-(unsigned long long)maximumNumberOfPeople;
-(void)setMaximumNumberOfPeople:(unsigned long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2 ;
-(NSSet *)peopleUUIDs;
-(void)invalidate;
@end
