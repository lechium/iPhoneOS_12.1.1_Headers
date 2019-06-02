/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPTwoPartAction.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField, TSDRep;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {

	TSWPHyperlinkField* _hyperlinkField;
	TSDRep*<TSWPHyperlinkHostRepProtocol> _hyperlinkRep;

}
+(id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
-(id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/id)arg3 ;
-(void)dealloc;
@end
