/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(int)portType;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(void)dealloc;
@end

