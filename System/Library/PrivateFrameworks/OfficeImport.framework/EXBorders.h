/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXBorders : NSObject
+(id)edBorderFromXmlElement:(xmlNode*)arg1 diagonalType:(int)arg2 state:(id)arg3 ;
+(int)edDiagStyleFromXmlElement:(xmlNode*)arg1 ;
+(id)edBordersFromXmlBordersElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edBorderStyleFromXmlBorderStyleString:(id)arg1 ;
+(void)initialize;
@end

