/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXChartType : NSObject
+(int)chdGroupingFromXmlGroupingElement:(xmlNode*)arg1 ;
+(id)chdChartTypeFromXmlChartTypeElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdShapeTypeFromXmlShapeTypeElement:(xmlNode*)arg1 ;
+(Class)chxChartTypeClassWithXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)stringWithGroupingEnum:(int)arg1 ;
+(void)resolveStyle:(id)arg1 state:(id)arg2 ;
+(void)prepareChartTypeForWriting:(id)arg1 ;
@end

