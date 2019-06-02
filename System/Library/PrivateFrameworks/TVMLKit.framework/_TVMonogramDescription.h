/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IKNetworkRequestLoader;
@class NSString, NSURL, UIFont, UIColor;

@interface _TVMonogramDescription : NSObject <NSCopying> {

	BOOL _hasPlaceholder;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	NSURL* _imageURL;
	UIFont* _font;
	long long _scaleMode;
	UIColor* _backgroundColor;
	double _upscaleAdjustment;
	double _cornerRadius;
	UIColor* _fillColor;
	double _borderWidth;
	UIColor* _borderColor;
	id<IKNetworkRequestLoader> _requestLoader;
	CGSize _size;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy,readonly) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;                                     //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                          //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceholder;                                          //@synthesize hasPlaceholder=_hasPlaceholder - In the implementation block
@property (assign,nonatomic) double borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                        //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic,__weak) id<IKNetworkRequestLoader> requestLoader;              //@synthesize requestLoader=_requestLoader - In the implementation block
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSURL *)imageURL;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4 ;
-(unsigned long long)preferedMonogramType;
-(void)setHasPlaceholder:(BOOL)arg1 ;
-(id<IKNetworkRequestLoader>)requestLoader;
-(void)setRequestLoader:(id<IKNetworkRequestLoader>)arg1 ;
-(id)copyWithType:(unsigned long long)arg1 ;
-(BOOL)hasPlaceholder;
-(CGSize)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(UIFont *)font;
-(NSString *)text;
-(UIColor *)backgroundColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)fillColor;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(UIEdgeInsets)padding;
-(UIColor *)borderColor;
-(void)setFillColor:(UIColor *)arg1 ;
@end

