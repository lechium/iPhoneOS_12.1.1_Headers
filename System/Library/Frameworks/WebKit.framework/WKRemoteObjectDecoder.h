/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectDecoder : NSCoder {

	RetainPtr<_WKRemoteObjectInterface>* _interface;
	const Dictionary* _rootDictionary;
	const Dictionary* _currentDictionary;
	SEL _replyToSelector;
	const Array* _objectStream;
	unsigned long long _objectStreamPosition;
	const HashSet<Class, WTF::PtrHash<Class>, WTF::HashTraits<Class> >* _allowedClasses;

}
-(id)initWithInterface:(id)arg1 rootObjectDictionary:(const Dictionary*)arg2 replyToSelector:(SEL)arg3 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(BOOL)requiresSecureCoding;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
@end

