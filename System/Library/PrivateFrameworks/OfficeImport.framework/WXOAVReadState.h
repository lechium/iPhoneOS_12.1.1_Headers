/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OAVReadState.h>

@class WXReadState, WDParagraph, NSMutableDictionary;

@interface WXOAVReadState : OAVReadState {

	WXReadState* mWxState;
	WDParagraph* mParagraph;
	NSMutableDictionary* mNextVmlShapeIdToTextBoxMap;

}
-(id)currentParagraph;
-(void)setCurrentParagraph:(id)arg1 ;
-(id)wxReadState;
-(id)nextVmlShapeIdToTextBoxMap;
-(id)initWithWXReadState:(id)arg1 ;
-(void)dealloc;
@end

