/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDTableRow, WDTableCellProperties, WDText, NSString;

@interface WDTableCell : NSObject {

	unsigned long long mIndex;
	WDTableRow* mRow;
	WDTableCellProperties* mProperties;
	WDText* mText;
	NSString* mIdentifier;
	BOOL mUseTrackedProperties;

}
-(void)clearProperties;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(long long)compareIndex:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(id)description;
-(id)text;
-(id)row;
-(void)setIdentifier:(id)arg1 ;
-(unsigned long long)index;
-(id)properties;
@end
