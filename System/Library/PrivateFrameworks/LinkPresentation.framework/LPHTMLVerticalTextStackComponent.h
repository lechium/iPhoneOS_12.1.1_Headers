/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPVerticalTextStackViewStyle, LPCaptionBarPresentationProperties;

@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent {

	LPVerticalTextStackViewStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
+(id)additionalRulesForStyle:(id)arg1 ;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
-(id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 firstLineLeading:(double)arg4 ;
@end
