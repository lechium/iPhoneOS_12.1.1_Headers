/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXConnector : NSObject
+(void)readConnectionFromParent:(xmlNode*)arg1 nodeName:(const char*)arg2 connection:(id)arg3 drawingState:(id)arg4 ;
+(void)readNonVisualConnectorProperties:(xmlNode*)arg1 inNamespace:(id)arg2 connectorProperties:(id)arg3 drawingState:(id)arg4 ;
+(id)readFromXmlNode:(xmlNode*)arg1 inNamespace:(id)arg2 drawingState:(id)arg3 ;
@end
