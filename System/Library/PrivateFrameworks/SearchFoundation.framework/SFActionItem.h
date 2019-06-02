/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFActionItem.h>
@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;


@protocol SFActionItem <NSObject>
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelForLocalMedia; 
@property (assign,nonatomic) BOOL isOverlay; 
@property (nonatomic,copy) NSArray * storeIdentifiers; 
@property (assign,nonatomic) BOOL requiresLocalMedia; 
@property (nonatomic,copy) NSString * localMediaIdentifier; 
@property (nonatomic,retain) SFPunchout * punchout; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,copy) NSData * mapsData; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * offerType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * labelITunes; 
@property (assign,nonatomic) BOOL isITunes; 
@property (nonatomic,retain) SFImage * icon; 
@property (nonatomic,retain) SFImage * baseIcon; 
@property (nonatomic,retain) SFLatLng * location; 
@property (nonatomic,copy) NSString * messageIdentifier; 
@property (nonatomic,copy) NSURL * messageURL; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setLatitude:(double)arg1;
-(void)setLongitude:(double)arg1;
-(double)latitude;
-(double)longitude;
-(void)setPhoneNumber:(id)arg1;
-(NSData *)mapsData;
-(SFPunchout *)punchout;
-(NSString *)contactIdentifier;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)email;
-(void)setEmail:(id)arg1;
-(void)setLocalMediaIdentifier:(id)arg1;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(void)setMapsData:(id)arg1;
-(void)setMessageURL:(id)arg1;
-(void)setLabelForLocalMedia:(id)arg1;
-(void)setRequiresLocalMedia:(BOOL)arg1;
-(void)setLabelITunes:(id)arg1;
-(void)setIsITunes:(BOOL)arg1;
-(void)setBaseIcon:(id)arg1;
-(SFImage *)baseIcon;
-(void)setPunchout:(id)arg1;
-(void)setStoreIdentifiers:(id)arg1;
-(NSString *)offerType;
-(NSURL *)messageURL;
-(void)setOfferType:(id)arg1;
-(void)setIsOverlay:(BOOL)arg1;
-(BOOL)isOverlay;
-(void)setContactIdentifier:(id)arg1;
-(NSString *)labelForLocalMedia;
-(NSString *)localMediaIdentifier;
-(BOOL)requiresLocalMedia;
-(NSArray *)storeIdentifiers;
-(NSString *)applicationBundleIdentifier;
-(NSData *)jsonData;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(id)arg1;
-(NSString *)type;
-(void)setType:(id)arg1;
-(SFImage *)icon;
-(void)setIcon:(id)arg1;
-(NSString *)label;
-(NSString *)provider;
-(void)setProvider:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLabel:(id)arg1;
-(void)setLocation:(id)arg1;
-(NSString *)phoneNumber;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFPunchout, NSData, SFImage, SFLatLng, NSURL, NSDictionary;

@interface SFActionItem : NSObject <SFActionItem, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _isOverlay;
	BOOL _requiresLocalMedia;
	BOOL _isITunes;
	NSString* _label;
	NSString* _labelForLocalMedia;
	NSArray* _storeIdentifiers;
	NSString* _localMediaIdentifier;
	SFPunchout* _punchout;
	NSString* _applicationBundleIdentifier;
	NSString* _contactIdentifier;
	NSString* _phoneNumber;
	NSString* _email;
	NSData* _mapsData;
	double _latitude;
	double _longitude;
	NSString* _provider;
	NSString* _offerType;
	NSString* _type;
	NSString* _labelITunes;
	SFImage* _icon;
	SFImage* _baseIcon;
	SFLatLng* _location;
	NSString* _messageIdentifier;
	NSURL* _messageURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * labelForLocalMedia;                            //@synthesize labelForLocalMedia=_labelForLocalMedia - In the implementation block
@property (assign,nonatomic) BOOL isOverlay;                                         //@synthesize isOverlay=_isOverlay - In the implementation block
@property (nonatomic,copy) NSArray * storeIdentifiers;                               //@synthesize storeIdentifiers=_storeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalMedia;                                //@synthesize requiresLocalMedia=_requiresLocalMedia - In the implementation block
@property (nonatomic,copy) NSString * localMediaIdentifier;                          //@synthesize localMediaIdentifier=_localMediaIdentifier - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                  //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                   //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactIdentifier;                             //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * email;                                         //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSData * mapsData;                                        //@synthesize mapsData=_mapsData - In the implementation block
@property (assign,nonatomic) double latitude;                                        //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * provider;                                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy) NSString * offerType;                                     //@synthesize offerType=_offerType - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * labelITunes;                                   //@synthesize labelITunes=_labelITunes - In the implementation block
@property (assign,nonatomic) BOOL isITunes;                                          //@synthesize isITunes=_isITunes - In the implementation block
@property (nonatomic,retain) SFImage * icon;                                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) SFImage * baseIcon;                                     //@synthesize baseIcon=_baseIcon - In the implementation block
@property (nonatomic,retain) SFLatLng * location;                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                             //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * messageURL;                                       //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)latitude;
-(double)longitude;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSData *)mapsData;
-(SFPunchout *)punchout;
-(NSString *)contactIdentifier;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)setLocalMediaIdentifier:(NSString *)arg1 ;
-(NSString *)labelITunes;
-(BOOL)isITunes;
-(BOOL)hasIsOverlay;
-(BOOL)hasRequiresLocalMedia;
-(BOOL)hasIsITunes;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setMessageURL:(NSURL *)arg1 ;
-(void)setLabelForLocalMedia:(NSString *)arg1 ;
-(void)setRequiresLocalMedia:(BOOL)arg1 ;
-(void)setLabelITunes:(NSString *)arg1 ;
-(void)setIsITunes:(BOOL)arg1 ;
-(void)setBaseIcon:(SFImage *)arg1 ;
-(SFImage *)baseIcon;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(void)setStoreIdentifiers:(NSArray *)arg1 ;
-(NSString *)offerType;
-(NSURL *)messageURL;
-(void)setOfferType:(NSString *)arg1 ;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isOverlay;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(NSString *)labelForLocalMedia;
-(NSString *)localMediaIdentifier;
-(BOOL)requiresLocalMedia;
-(NSArray *)storeIdentifiers;
-(NSString *)applicationBundleIdentifier;
-(NSData *)jsonData;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(SFImage *)icon;
-(void)setIcon:(SFImage *)arg1 ;
-(NSString *)label;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFLatLng *)location;
-(void)setLabel:(NSString *)arg1 ;
-(void)setLocation:(SFLatLng *)arg1 ;
-(NSString *)phoneNumber;
@end

