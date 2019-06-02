/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class CLPlacemark, NSString, NSData;

@interface ICLocation : NSManagedObject {

	BOOL updatingPlace;
	CLPlacemark* _placemark;

}

@property (assign,nonatomic) BOOL updatingPlace; 
@property (nonatomic,readonly) NSString * formattedAddress; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,retain) NSData * placemarkData; 
@property (nonatomic,retain) CLPlacemark * placemark;                    //@synthesize placemark=_placemark - In the implementation block
+(id)searchStringsForPlacemark:(id)arg1 ;
-(void)didTurnIntoFault;
-(CLPlacemark *)placemark;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(NSString *)formattedAddress;
-(void)setLocationFromPlacemark:(id)arg1 ;
-(void)setLocationFromURL:(id)arg1 ;
-(id)searchStrings;
-(BOOL)updatingPlace;
-(void)setUpdatingPlace:(BOOL)arg1 ;
@end

