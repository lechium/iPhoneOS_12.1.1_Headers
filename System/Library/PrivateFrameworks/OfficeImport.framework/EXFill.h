/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXFill : NSObject
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edPatternFillFromXmlElement:(xmlNode*)arg1 differentialFill:(BOOL)arg2 state:(id)arg3 ;
+(id)edGradientFillFromXmlElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPatternTypeFromXmlPatternTypeString:(id)arg1 ;
+(int)edGradientTypeFromXmlGradientTypeString:(id)arg1 state:(id)arg2 ;
+(id)edStopFromXmlGradientElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edFillFromXmlFillElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)initialize;
@end

