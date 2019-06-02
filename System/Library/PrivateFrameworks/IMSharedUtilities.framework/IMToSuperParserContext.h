/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSMutableAttributedString, NSString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned long long _underlineCount;
	unsigned long long _boldCount;
	unsigned long long _italicCount;
	unsigned long long _strikethroughCount;
	unsigned long long _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	long long _baseWritingDirection;

}

@property (nonatomic,copy) NSString * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) long long baseWritingDirection;                     //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(id)resultsForLogging;
-(void)pushLink:(id)arg1 ;
-(void)popLink;
-(void)incrementBoldCount;
-(void)decrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontFamily;
-(void)popFontSize;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_clearIvars;
-(void)_initIvars;
-(void)_updateFontFamily;
-(void)_updateFontSize;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 ;
-(NSArray *)fileTransferGUIDs;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(void)popBackgroundColor;
-(long long)baseWritingDirection;
-(void)dealloc;
-(id)name;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(void)reset;
-(void)appendString:(id)arg1 ;
-(NSAttributedString *)body;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setForegroundColor:(NSString *)arg1 ;
-(NSString *)foregroundColor;
@end

