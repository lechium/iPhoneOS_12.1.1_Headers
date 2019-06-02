/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_invokeCompletionHandlers;
-(BOOL)isRichTextResolved;
-(id)initWithString:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)completionHandlers;
-(void)setCompletionHandlers:(id)arg1 ;
@end
