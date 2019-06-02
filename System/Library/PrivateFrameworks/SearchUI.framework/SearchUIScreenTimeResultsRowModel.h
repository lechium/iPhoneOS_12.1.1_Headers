/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray, NSString;

@interface SearchUIScreenTimeResultsRowModel : NSObject <SearchUIRowModel> {

	NSArray* _results;
	NSString* _title;

}

@property (retain) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cardSection;
-(BOOL)isDraggable;
-(BOOL)isTappable;
-(id)initWithSection:(id)arg1 ;
-(id)identifyingResult;
-(id)punchouts;
-(id)dragURL;
-(id)dragTitle;
-(id)dragSubtitle;
-(id)dragText;
-(id)dragAppBundleID;
-(double)leadingSeparatorImageInset;
-(id)nextCard;
-(BOOL)isSuggestion;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)separatorStyle;
-(id)reuseIdentifier;
-(Class)viewClass;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end
