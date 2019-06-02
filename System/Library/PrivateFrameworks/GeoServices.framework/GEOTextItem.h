/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTextItem.h>
@class NSString;


@protocol GEOTextItem
@property (nonatomic,readonly) NSString * primaryText; 
@required
-(NSString *)primaryText;

@end


@class NSString;

@interface GEOTextItem : NSObject <GEOTextItem> {

	NSString* _primaryText;

}

@property (nonatomic,readonly) NSString * primaryText;              //@synthesize primaryText=_primaryText - In the implementation block
-(id)initWithPrimaryText:(id)arg1 ;
-(id)initWithTextItem:(id)arg1 ;
-(NSString *)primaryText;
@end

