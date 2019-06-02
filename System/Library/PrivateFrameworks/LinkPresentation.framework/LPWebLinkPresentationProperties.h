/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LPLinkPresentationPropertyProvider.h>

@class LPCaptionBarPresentationProperties, NSString, LPImage, LPVideo, UIColor, NSNumber, LPiTunesPlaybackInformation;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider> {

	BOOL _preliminary;
	long long _style;
	LPCaptionBarPresentationProperties* _captionBar;
	LPCaptionBarPresentationProperties* _mediaTopCaptionBar;
	LPCaptionBarPresentationProperties* _mediaBottomCaptionBar;
	NSString* _quotedText;
	LPImage* _image;
	LPVideo* _video;
	UIColor* _backgroundColor;
	NSNumber* _minimumHeight;
	LPiTunesPlaybackInformation* _iTunesPlaybackInformation;

}

@property (assign,getter=isPreliminary,nonatomic) BOOL preliminary;                                   //@synthesize preliminary=_preliminary - In the implementation block
@property (assign,nonatomic) long long style;                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * captionBar;                         //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaTopCaptionBar;                 //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarPresentationProperties * mediaBottomCaptionBar;              //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,copy) NSString * quotedText;                                                     //@synthesize quotedText=_quotedText - In the implementation block
@property (nonatomic,retain) LPImage * image;                                                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPVideo * video;                                                         //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSNumber * minimumHeight;                                                //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,retain) LPiTunesPlaybackInformation * iTunesPlaybackInformation;                 //@synthesize iTunesPlaybackInformation=_iTunesPlaybackInformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(LPVideo *)video;
-(BOOL)isPreliminary;
-(void)setPreliminary:(BOOL)arg1 ;
-(NSNumber *)minimumHeight;
-(void)setVideo:(LPVideo *)arg1 ;
-(LPCaptionBarPresentationProperties *)captionBar;
-(LPCaptionBarPresentationProperties *)mediaBottomCaptionBar;
-(LPCaptionBarPresentationProperties *)mediaTopCaptionBar;
-(NSString *)quotedText;
-(void)setCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setMediaBottomCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setMediaTopCaptionBar:(LPCaptionBarPresentationProperties *)arg1 ;
-(void)setITunesPlaybackInformation:(LPiTunesPlaybackInformation *)arg1 ;
-(LPiTunesPlaybackInformation *)iTunesPlaybackInformation;
-(void)setQuotedText:(NSString *)arg1 ;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(UIColor *)backgroundColor;
@end

