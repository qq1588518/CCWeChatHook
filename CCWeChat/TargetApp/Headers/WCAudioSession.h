//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCAudioSession : NSObject
{
    _Bool _m_otherPlayingBeforeActive;
    id <WCAudioSessionDelegate> _m_delegate;
}

+ (id)shareInstance;
@property(nonatomic) _Bool m_otherPlayingBeforeActive; // @synthesize m_otherPlayingBeforeActive=_m_otherPlayingBeforeActive;
@property(nonatomic) __weak id <WCAudioSessionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (_Bool)tryActiveAudioSession;
- (void)handleRouteChange:(id)arg1;
- (unsigned long long)currentCategoryId;
- (float)getOutputVolume;
- (void)activePlayAndRecordDuckOthers;
- (void)activePlaybackDuckOthers;
- (void)activePlaybackMixWithOthers;
- (void)activeMixWithOtherAudio;
- (_Bool)isOtherAudioPlaying;
- (unsigned long long)getCurrentAudioMode;
- (void)enableBluetoothInput;
- (_Bool)setSpeaker:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setSpeaker:(_Bool)arg1;
- (void)reportSetCategoryError:(id)arg1;
- (_Bool)setCategroy:(unsigned long long)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (_Bool)setCategroy:(unsigned long long)arg1;
- (_Bool)setActive:(_Bool)arg1 stopPlayCheck:(_Bool)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1;
- (void)restart;
- (void)updateDelegate:(id)arg1;
- (_Bool)otherPlayingBeforeActive;
- (void)dealloc;

@end
