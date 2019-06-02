/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SFRichText, SFActionItem, NSString, SFCard, SFSearchResult, SFImage;


@protocol SearchUIAuxilliaryFieldProtocol <NSObject>
@property (readonly) SFRichText * title; 
@property (readonly) SFActionItem * action; 
@property (readonly) NSString * auxiliaryTopText; 
@property (readonly) NSString * auxiliaryMiddleText; 
@property (readonly) NSString * auxiliaryBottomText; 
@property (readonly) int auxiliaryBottomTextColor; 
@property (readonly) SFCard * card; 
@property (readonly) SFSearchResult * identifyingResult; 
@property (readonly) SFImage * thumbnail; 
@required
-(SFCard *)card;
-(SFSearchResult *)identifyingResult;
-(NSString *)auxiliaryTopText;
-(NSString *)auxiliaryBottomText;
-(NSString *)auxiliaryMiddleText;
-(int)auxiliaryBottomTextColor;
-(SFRichText *)title;
-(SFActionItem *)action;
-(SFImage *)thumbnail;

@end

