/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject {

	OADTextBody* mTextBody;
	OADTableCellProperties* mProperties;
	int mRowSpan;
	int mGridSpan;
	BOOL mHorzMerge;
	BOOL mVertMerge;
	int mTopRow;
	int mLeftColumn;

}
-(BOOL)merge:(int)arg1 ;
-(BOOL)horzMerge;
-(BOOL)vertMerge;
-(int)gridSpan;
-(int)rowSpan;
-(id)textBody;
-(void)setRowSpan:(int)arg1 ;
-(void)setGridSpan:(int)arg1 ;
-(void)setHorzMerge:(BOOL)arg1 ;
-(void)setVertMerge:(BOOL)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(int)spanAlongDir:(int)arg1 ;
-(int)topRow;
-(void)setTopRow:(int)arg1 ;
-(int)leftColumn;
-(void)setLeftColumn:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setProperties:(id)arg1 ;
-(id)properties;
@end
