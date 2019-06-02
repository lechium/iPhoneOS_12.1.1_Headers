/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor, NSString;

@interface CLKImageProvider : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finalized;
	UIImage* _onePieceImage;
	UIColor* _tintColor;
	UIImage* _twoPieceImageBackground;
	UIImage* _twoPieceImageForeground;
	NSString* _accessibilityLabel;
	/*^block*/id _imageViewCreationHandler;
	UIImage* _foregroundAccentImage;
	UIColor* _foregroundAccentImageColor;
	CGSize _maxSize;

}

@property (nonatomic,copy) id imageViewCreationHandler;                         //@synthesize imageViewCreationHandler=_imageViewCreationHandler - In the implementation block
@property (nonatomic,retain) UIImage * foregroundAccentImage;                   //@synthesize foregroundAccentImage=_foregroundAccentImage - In the implementation block
@property (nonatomic,retain) UIColor * foregroundAccentImageColor;              //@synthesize foregroundAccentImageColor=_foregroundAccentImageColor - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                                  //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain) UIImage * onePieceImage;                           //@synthesize onePieceImage=_onePieceImage - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * twoPieceImageBackground;                 //@synthesize twoPieceImageBackground=_twoPieceImageBackground - In the implementation block
@property (nonatomic,retain) UIImage * twoPieceImageForeground;                 //@synthesize twoPieceImageForeground=_twoPieceImageForeground - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;                     //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(id)imageProviderWithOnePieceImage:(id)arg1 ;
+(id)imageProviderWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3 ;
+(id)imageProviderWithImageViewCreationHandler:(/*^block*/id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)finalizeWithMaxSize:(CGSize)arg1 maskToCircle:(BOOL)arg2 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)setOnePieceImage:(UIImage *)arg1 ;
-(void)setTwoPieceImageBackground:(UIImage *)arg1 ;
-(void)setTwoPieceImageForeground:(UIImage *)arg1 ;
-(void)setImageViewCreationHandler:(id)arg1 ;
-(void)_resizeImagesIfNecessaryAndMaskToCircle:(BOOL)arg1 ;
-(UIColor *)foregroundAccentImageColor;
-(void)setForegroundAccentImageColor:(UIColor *)arg1 ;
-(UIImage *)twoPieceImageBackground;
-(UIImage *)twoPieceImageForeground;
-(UIImage *)foregroundAccentImage;
-(UIImage *)onePieceImage;
-(void)setForegroundAccentImage:(UIImage *)arg1 ;
-(id)imageViewCreationHandler;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(CGSize)maxSize;
-(void)validate;
@end

