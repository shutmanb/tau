/*
 * Copyright 2018, 2019, 2020 Dooboolab.
 *
 * This file is part of Flutter-Sound.
 *
 * Flutter-Sound is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 3 (LGPL-V3), as published by
 * the Free Software Foundation.
 *
 * Flutter-Sound is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Flutter-Sound.  If not, see <https://www.gnu.org/licenses/>.
 */


@interface FlutterMethodCall
{
// TODO
}
@end

enum FlutterResult
{
// TODO
TOTO,
TITI
};


// this enum MUST be synchronized with lib/flutter_sound.dart and fluttersound/AudioInterface.java
typedef enum
{

  /// This is the default codec. If used
  /// Flutter Sound will use the files extension to guess the codec.
  /// If the file extension doesn't match a known codec then
  /// Flutter Sound will throw an exception in which case you need
  /// pass one of the know codec.
  defaultCodec,

  /// AAC codec in an ADTS container
  aacADTS,

  /// OPUS in an OGG container
  opusOGG,

  /// Apple encapsulates its bits in its own special envelope
  /// .caf instead of a regular ogg/opus (.opus).
  /// This is completely stupid, this is Apple.
  opusCAF,

  /// For those who really insist about supporting MP3. Shame on you !
  mp3,

  /// VORBIS in an OGG container
  vorbisOGG,

  /// Linear 16 PCM, without envelope
  pcm16,

  /// Linear 16 PCM, which is a Wave file.
  pcm16WAV,


  /// Linear 16 PCM, which is a AIFF file
  pcm16AIFF,

  /// Linear 16 PCM, which is a CAF file
  pcm16CAF,

  /// FLAC
  flac,

  /// AAC in a MPEG4 container
  aacMP4,
  
  amr,
} t_CODEC;


@interface FlutterStandardTypedData
{
// TODO
}
@end

@interface Track : NSObject
{
    NSString *path;
    NSString *title;
    NSString *author;
    NSString *albumArtUrl;
    NSString *albumArtAsset;
    FlutterStandardTypedData *dataBuffer;
}

@property(nonatomic, retain) NSString * _Nullable path;
@property(nonatomic, retain) NSString * _Nullable title;
@property(nonatomic, retain) NSString * _Nullable author;
@property(nonatomic, retain) NSString * _Nullable albumArtUrl;
@property(nonatomic, retain) NSString * _Nullable albumArtAsset;
@property(nonatomic, retain) NSString * _Nullable albumArtFile;
@property(nonatomic, retain) FlutterStandardTypedData * _Nullable dataBuffer;

- (_Nullable id)initFromJson:(NSString * _Nullable )jsonString;
- (_Nullable id)initFromDictionary:(NSDictionary * _Nullable )jsonData;
- (bool)isUsingPath;

@end