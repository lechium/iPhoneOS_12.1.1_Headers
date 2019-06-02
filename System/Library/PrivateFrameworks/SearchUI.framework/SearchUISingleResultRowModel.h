/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIRowModel.h>

@class SFSearchResult, NSString;

@interface SearchUISingleResultRowModel : NSObject <SearchUIRowModel> {

	SFSearchResult* _result;

}

@property (retain) SFSearchResult * result;                         //@synthesize result=_result - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionText;
-(id)cardSection;
-(BOOL)isDraggable;
-(BOOL)isTappable;
-(id)initWithResult:(id)arg1 ;
-(BOOL)isContact;
-(id)identifyingResult;
-(id)punchouts;
-(id)dragURL;
-(id)dragTitle;
-(id)dragSubtitle;
-(id)dragText;
-(id)dragAppBundleID;
-(double)leadingSeparatorImageInset;
-(BOOL)isCalculation;
-(id)nextCard;
-(void)setResult:(SFSearchResult *)arg1 ;
-(BOOL)isSuggestion;
-(int)separatorStyle;
-(id)reuseIdentifier;
-(SFSearchResult *)result;
-(Class)viewClass;
@end

