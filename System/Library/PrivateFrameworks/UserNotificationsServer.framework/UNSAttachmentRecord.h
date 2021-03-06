/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UserNotificationsServer/UserNotificationsServer-Structs.h>
@class NSString, NSURL, NSNumber;

@interface UNSAttachmentRecord : NSObject {

	BOOL _thumbnailHidden;
	BOOL _hiddenFromDefaultExpandedView;
	NSString* _identifier;
	unsigned long long _family;
	NSURL* _URL;
	NSString* _type;
	NSNumber* _thumbnailFrameNumber;
	SCD_Struct_UN1 _thumbnailTimestamp;
	CGRect _thumbnailClippingRect;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long family;                       //@synthesize family=_family - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL thumbnailHidden;                            //@synthesize thumbnailHidden=_thumbnailHidden - In the implementation block
@property (assign,nonatomic) CGRect thumbnailClippingRect;                    //@synthesize thumbnailClippingRect=_thumbnailClippingRect - In the implementation block
@property (nonatomic,copy) NSNumber * thumbnailFrameNumber;                   //@synthesize thumbnailFrameNumber=_thumbnailFrameNumber - In the implementation block
@property (assign,nonatomic) SCD_Struct_UN1 thumbnailTimestamp;               //@synthesize thumbnailTimestamp=_thumbnailTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView;              //@synthesize hiddenFromDefaultExpandedView=_hiddenFromDefaultExpandedView - In the implementation block
-(unsigned long long)family;
-(void)setFamily:(unsigned long long)arg1 ;
-(NSNumber *)thumbnailFrameNumber;
-(CGRect)thumbnailClippingRect;
-(BOOL)thumbnailHidden;
-(SCD_Struct_UN1)thumbnailTimestamp;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setThumbnailClippingRect:(CGRect)arg1 ;
-(void)setThumbnailFrameNumber:(NSNumber *)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(void)setThumbnailTimestamp:(SCD_Struct_UN1)arg1 ;
-(BOOL)hiddenFromDefaultExpandedView;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

