/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXAxis : NSObject
+(Class)chxAxisClassWithXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)chdAxisFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readScalingFromXmlScalingElement:(xmlNode*)arg1 axis:(id)arg2 state:(id)arg3 ;
+(int)chdAxisPositionFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)chdTickMarkFromXmlTickMarkElement:(xmlNode*)arg1 ;
+(int)chdTickLabelPositionFromXmlTickLabelPositionElement:(xmlNode*)arg1 ;
+(int)chdCrossesFromXmlAxisElement:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)chxAxisClassWithChdAxis:(id)arg1 ;
@end
