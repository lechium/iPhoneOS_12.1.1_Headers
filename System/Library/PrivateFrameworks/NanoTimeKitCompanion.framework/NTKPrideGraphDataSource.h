/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLKDevice, NSArray, NSDictionary;

@interface NTKPrideGraphDataSource : NSObject {

	CLKDevice* _device;
	NSArray* _startListings;
	NSDictionary* _allListings;
	NSDictionary* _listingsByTag;

}
-(id)initForDevice:(id)arg1 ;
-(id)listings;
-(id)randomInitialListing;
-(id)randomListingWithTag:(id)arg1 ;
-(void)_loadListings;
-(id)_randomListingFromArray:(id)arg1 ;
-(void)dealloc;
@end
