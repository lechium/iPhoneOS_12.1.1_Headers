/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIImage, NSString, NSDate;

@interface NSSArticleInternal : NSObject <NSCoding> {

	UIImage* _thumbnailImage;
	UIImage* _publisherLogoImage;
	NSString* _title;
	NSString* _shortExcerpt;
	NSDate* _publishDate;
	NSString* _publisherName;

}

@property (nonatomic,readonly) UIImage * thumbnailImage;                  //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,readonly) UIImage * publisherLogoImage;              //@synthesize publisherLogoImage=_publisherLogoImage - In the implementation block
@property (nonatomic,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * shortExcerpt;                   //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) NSDate * publishDate;                      //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,readonly) NSString * publisherName;                  //@synthesize publisherName=_publisherName - In the implementation block
+(id)imageWithURL:(id)arg1 ;
+(void)articleFromNotificationUserInfo:(id)arg1 thumbnailFileURL:(id)arg2 publisherLogoFileURL:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)_articleFromCoreSpotlightIdentifier:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)articleFromNotification:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)coreSpotlightIdentifierRepresentsArticleIdentifier:(id)arg1 ;
+(void)articleFromCoreSpotlightIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UIImage *)thumbnailImage;
-(NSDate *)publishDate;
-(NSString *)shortExcerpt;
-(NSString *)publisherName;
-(UIImage *)publisherLogoImage;
-(id)initWithThumbnailImage:(id)arg1 title:(id)arg2 shortExcerpt:(id)arg3 publishDate:(id)arg4 publisherName:(id)arg5 publisherLogoImage:(id)arg6 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
@end
