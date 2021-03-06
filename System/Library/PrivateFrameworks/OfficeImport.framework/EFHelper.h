/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFHelper <NSObject>
@required
-(int)rowNumber;
-(unsigned long long)resolveFile:(id)arg1;
-(unsigned long long)resolveTableColumn:(id)arg1 columnName:(id)arg2;
-(int)resolveFunctionName:(id)arg1;
-(int)columnNumber;
-(unsigned long long)resolveName:(id)arg1;
-(unsigned long long)resolveSheet:(id)arg1;
-(BOOL)isCurrentSheet:(id)arg1;
-(unsigned long long)resolveFirstSheet:(id)arg1 lastSheet:(id)arg2;
-(id)resolveTable:(id)arg1;
-(unsigned long long)resolveTableToSheetId:(id)arg1;

@end

