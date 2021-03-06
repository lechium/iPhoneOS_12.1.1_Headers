/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
+(id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_dateIntervalForItems:(id)arg1 ;
+(id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

