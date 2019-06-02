/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLogoImageSet : PKPassImageSet {

	PKImage* _logoImage;
	PKImage* _backgroundImage;
	PKImage* _thumbnailImage;
	PKImage* _stripImage;
	PKImage* _footerImage;
	PKImage* _bankLogoImage;
	PKImage* _networkLogoImage;
	PKImage* _cobrandLogoImage;
	PKImage* _cardBackgroundImage;
	PKImage* _cardBackgroundCombinedImage;

}

@property (nonatomic,retain) PKImage * logoImage;                                //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) PKImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * thumbnailImage;                           //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (nonatomic,retain) PKImage * stripImage;                               //@synthesize stripImage=_stripImage - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                              //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,retain) PKImage * bankLogoImage;                            //@synthesize bankLogoImage=_bankLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * networkLogoImage;                         //@synthesize networkLogoImage=_networkLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cobrandLogoImage;                         //@synthesize cobrandLogoImage=_cobrandLogoImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundImage;                      //@synthesize cardBackgroundImage=_cardBackgroundImage - In the implementation block
@property (nonatomic,retain) PKImage * cardBackgroundCombinedImage;              //@synthesize cardBackgroundCombinedImage=_cardBackgroundCombinedImage - In the implementation block
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
+(BOOL)supportsSecureCoding;
+(BOOL)shouldCache;
-(PKImage *)stripImage;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setStripImage:(PKImage *)arg1 ;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setCardBackgroundCombinedImage:(PKImage *)arg1 ;
-(PKImage *)cardBackgroundCombinedImage;
-(void)setBankLogoImage:(PKImage *)arg1 ;
-(void)setNetworkLogoImage:(PKImage *)arg1 ;
-(void)setCobrandLogoImage:(PKImage *)arg1 ;
-(void)setCardBackgroundImage:(PKImage *)arg1 ;
-(PKImage *)bankLogoImage;
-(PKImage *)networkLogoImage;
-(PKImage *)cobrandLogoImage;
-(PKImage *)cardBackgroundImage;
-(void)setThumbnailImage:(PKImage *)arg1 ;
-(PKImage *)thumbnailImage;
-(void)setLogoImage:(PKImage *)arg1 ;
-(PKImage *)logoImage;
-(PKImage *)footerImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(PKImage *)backgroundImage;
-(void)setBackgroundImage:(PKImage *)arg1 ;
@end

