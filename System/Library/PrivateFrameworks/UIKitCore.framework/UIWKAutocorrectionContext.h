/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface UIWKAutocorrectionContext : NSObject {

	NSString* _contextBeforeSelection;
	NSString* _selectedText;
	NSString* _contextAfterSelection;
	NSString* _markedText;
	NSRange _rangeInMarkedText;

}

@property (nonatomic,copy) NSString * contextBeforeSelection;              //@synthesize contextBeforeSelection=_contextBeforeSelection - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                        //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * contextAfterSelection;               //@synthesize contextAfterSelection=_contextAfterSelection - In the implementation block
@property (nonatomic,copy) NSString * markedText;                          //@synthesize markedText=_markedText - In the implementation block
@property (assign,nonatomic) NSRange rangeInMarkedText;                    //@synthesize rangeInMarkedText=_rangeInMarkedText - In the implementation block
-(void)dealloc;
-(NSString *)selectedText;
-(NSString *)markedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)contextBeforeSelection;
-(NSString *)contextAfterSelection;
-(NSRange)rangeInMarkedText;
-(void)setContextBeforeSelection:(NSString *)arg1 ;
-(void)setContextAfterSelection:(NSString *)arg1 ;
-(void)setMarkedText:(NSString *)arg1 ;
-(void)setRangeInMarkedText:(NSRange)arg1 ;
@end
