/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet {

	long long _destinationAssetCopyState;

}

@property (nonatomic,readonly) long long destinationAssetCopyState;              //@synthesize destinationAssetCopyState=_destinationAssetCopyState - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)destinationAssetCopyState;
@end

