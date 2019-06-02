/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableString, NSMutableArray;

@interface PptTextBlock : NSObject {

	PptTextHeaderAtom* mTextHeader;
	NSMutableString* mText;
	PptTextBlockStylingAtom* mStyleText;
	PptTextBlockSpecialInfoAtom* mSpecialInfo;
	NSMutableArray* mMetaCharacterFields;
	NSMutableArray* mBookmarks;
	NSMutableArray* mHyperlinks;
	PptTextRulerAtom* mTextRuler;

}
-(id)hyperlinks;
-(int)textType;
-(void)readTextBlock:(id)arg1 ;
-(PptTextRulerAtom*)textRuler;
-(int)paragraphRunCount;
-(PptParaRun*)paragraphRunAtIndex:(int)arg1 ;
-(int)characterRunCount;
-(PptCharRun*)characterRunAtIndex:(int)arg1 ;
-(int)specialInfoRunCount;
-(PptSpecialInfoRun*)specialInfoRunAtIndex:(int)arg1 ;
-(id)metaCharacterFields;
-(void)readString:(id)arg1 ;
-(void)readStyles:(id)arg1 ;
-(void)readSpecialInfo:(id)arg1 ;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1 ;
-(void)writeTextBlock:(id)arg1 ;
-(id)bookmarks;
-(id)init;
-(void)dealloc;
-(id)text;
-(unsigned)textIndex;
@end

