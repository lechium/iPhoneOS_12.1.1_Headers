/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTMapItem;

@interface RTFavoritePlace : NSObject {

	NSString* _title;
	RTMapItem* _mapItem;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) RTMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
-(RTMapItem *)mapItem;
-(id)initWithTitle:(id)arg1 mapItem:(id)arg2 ;
-(id)init;
-(id)description;
-(NSString *)title;
@end

