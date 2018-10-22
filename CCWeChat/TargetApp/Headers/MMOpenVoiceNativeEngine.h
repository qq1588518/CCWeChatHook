//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMOpenVoiceNativeEngine : NSObject
{
}

+ (int)uninit;
+ (int)exitRoom:(int)arg1;
+ (void)onNetworkChanged:(int)arg1;
+ (int)setCmdData:(int)arg1 data:(id)arg2;
+ (int)getVoiceActivity:(int)arg1;
+ (int)getAudioData:(char *)arg1 dataLength:(int)arg2;
+ (int)sendAudioData:(id)arg1 delay:(int)arg2;
+ (int)joinRoom:(long long)arg1 networkType:(int)arg2;
+ (int)updateSessionKey:(id)arg1;
+ (id)generateInitInfo:(id)arg1 sessionKey:(id)arg2;
+ (int)GetCPUCapacity;
+ (int)initEngine:(id)arg1 sessionKey:(id)arg2 nCallback:(struct IWXConfCallback *)arg3;
+ (struct IWXConfService *)getConfInst;

@end
