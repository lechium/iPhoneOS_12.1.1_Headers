/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPictureItemContainer.h>
@class NSArray;


@protocol GEOPictureItemContainer
@property (nonatomic,readonly) NSArray * pictureItems; 
@property (nonatomic,readonly) BOOL allowFullScreenPhoto; 
@required
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;

@end


@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer> {

	NSArray* _pictureItems;
	BOOL _allowFullScreenPhoto;

}

@property (nonatomic,readonly) NSArray * pictureItems;                 //@synthesize pictureItems=_pictureItems - In the implementation block
@property (nonatomic,readonly) BOOL allowFullScreenPhoto;              //@synthesize allowFullScreenPhoto=_allowFullScreenPhoto - In the implementation block
-(id)initWithPictureItemContainer:(id)arg1 ;
-(NSArray *)pictureItems;
-(BOOL)allowFullScreenPhoto;
-(id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(BOOL)arg2 ;
@end
