/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL;

@interface AXMVisionFeatureAssetMetadata : NSObject <NSSecureCoding> {

	NSString* _name;
	NSDate* _creationDate;
	NSString* _uti;
	NSString* _localizedTypeDescription;
	NSString* _TIFFImageDescription;
	NSString* _IPTCCaptionAbstract;
	NSString* _EXIFUserComment;
	NSString* _PNGImageDescription;
	NSURL* _assetURL;

}

@property (nonatomic,retain) NSURL * assetURL;                                 //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSString * uti;                                   //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * localizedTypeDescription;              //@synthesize localizedTypeDescription=_localizedTypeDescription - In the implementation block
@property (nonatomic,retain) NSString * TIFFImageDescription;                  //@synthesize TIFFImageDescription=_TIFFImageDescription - In the implementation block
@property (nonatomic,retain) NSString * IPTCCaptionAbstract;                   //@synthesize IPTCCaptionAbstract=_IPTCCaptionAbstract - In the implementation block
@property (nonatomic,retain) NSString * EXIFUserComment;                       //@synthesize EXIFUserComment=_EXIFUserComment - In the implementation block
@property (nonatomic,retain) NSString * PNGImageDescription;                   //@synthesize PNGImageDescription=_PNGImageDescription - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(id)assetMetadataFromURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setLocalizedTypeDescription:(NSString *)arg1 ;
-(void)setTIFFImageDescription:(NSString *)arg1 ;
-(void)setIPTCCaptionAbstract:(NSString *)arg1 ;
-(void)setEXIFUserComment:(NSString *)arg1 ;
-(void)setPNGImageDescription:(NSString *)arg1 ;
-(NSString *)localizedTypeDescription;
-(NSString *)TIFFImageDescription;
-(NSString *)IPTCCaptionAbstract;
-(NSString *)EXIFUserComment;
-(NSString *)PNGImageDescription;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSURL *)assetURL;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(NSURL *)url;
@end

